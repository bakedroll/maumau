#include "CardDeck.h"

#include <algorithm>
#include <ctime>

namespace mau
{
  void CardDeck::shuffle()
  {
    std::srand(static_cast<unsigned int>(std::time(0)));
    std::random_shuffle(m_cards.begin(), m_cards.end());
  }

  void CardDeck::addCard(const Card& card)
  {
    m_cards.push_back(card);
  }

  bool CardDeck::isEmpty() const
  {
    return m_cards.empty();
  }

  Card CardDeck::takeCard()
  {
    auto first = m_cards.cbegin();
    auto card  = *first;
    m_cards.erase(first);

    return card;
  }
}
