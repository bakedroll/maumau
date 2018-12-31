#include "mau/core/GameMaster.h"
#include "mau/core/Macros.h"

#include <cassert>


namespace mau
{
  GameMaster::GameMaster()
    : m_gameState(std::make_shared<GameState>())
  {
  }

  GameMaster::~GameMaster()
  {
    for (auto& player : m_players)
    {
      player->setNextPlayer(nullptr);
    }
    m_players.clear();
  }

  void GameMaster::addPlayer(IPlayer::Ptr player)
  {
    auto lastPlayer = m_players.rbegin();
    if (lastPlayer != std::rend(m_players))
    {
      (*lastPlayer)->setNextPlayer(player);
    }

    m_players.push_back(player);
    player->setNextPlayer(*m_players.begin());
  }

  bool GameMaster::distributeCards(CardDeck::Ptr deck, int numCardsPerPlayer)
  {
	  deck->shuffle();

    assert_return(m_players.size() > 1, false);

    for (auto i=0; i<numCardsPerPlayer; i++)
    {
      for (auto& player : m_players)
      {
        assert_return(!deck->isEmpty(), false);
        player->giveCard(deck->takeCard());
      }
    }

    m_gameState->setCardStack(deck);

    return true;
  }

  int GameMaster::runGame()
  {
	  return 0;
  }
}
