#pragma once

#include "mau/core/Card.h"
#include "mau/core/CardDeck.h"

namespace mau
{
  CardDeck::Ptr makeCardDeck(Value fromValue = Value::Seven, Value toValue = Value::Ace);
}
