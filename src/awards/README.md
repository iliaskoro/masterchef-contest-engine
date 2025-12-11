# Awards Module

Defines all award types that can be granted to players:

- `ImmunityAward`
- `FoodAward`
- `ExcursionAward`

Each award derives from `Award` and implements the `apply(Player&)` method.
Awards may modify scoring, immunity, or other gameplay state.
