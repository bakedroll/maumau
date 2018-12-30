#pragma once

#include "Defs.h"
#include "CardDeck.h"

namespace mau
{
  CardDeck makeCardDeck(Value fromValue = Value::Seven, Value toValue = Value::Ace);
}
