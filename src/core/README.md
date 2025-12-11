# Core Module

This module contains the fundamental entities of the simulation engine

- `Player` Represents a contestant with scoring and performance state.
- `Team` Group of players with collective scoring mechanics.
- `Competition` Abstract base class for all competition types.
- `Award` Abstract base class for all awards applied to players.
- `Round` Optional utility for structuring contest phases.
- `main.cpp` Example entry point demonstrating usage.

All competitions and awards build on top of these abstractions.
