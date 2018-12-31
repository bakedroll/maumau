#include "mau/core/Dealer.h"
#include "mau/core/GameState.h"
#include "mau/core/GameMaster.h"

int main(int argc, char** argv)
{
  mau::GameMaster master;

  master.addPlayer(std::make_shared<mau::IPlayer>());
  master.addPlayer(std::make_shared<mau::IPlayer>());
  master.addPlayer(std::make_shared<mau::IPlayer>());

  master.distributeCards(mau::makeCardDeck(), 5);

  return master.runGame();
}
