# Competitions Module

Implements all competition types supported by the engine:

- `ImmunityCompetition`
- `CreativityCompetition`
- `TeamCompetition`

Each competition derives from `Competition` and implements:

- scoring logic
- winner selection
- award assignment
- per-round rules

New competition types can be added easily by extending `Competition`.
