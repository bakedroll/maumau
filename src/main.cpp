#include "Dealer.h"
#include "GameState.h"

int main(int argc, char** argv)
{
  auto deck = mau::makeCardDeck();
  deck.shuffle();

  mau::GameState state(deck, 3, 5);

  return 0;
}
