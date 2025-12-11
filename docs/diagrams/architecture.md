# Architecture Overview

This document describes the high-level structure of the MasterChef Contest Engine.

---

## Core Abstractions

### Player
Represents a contestant with:
- score history
- state flags (e.g., immunity)
- performance metrics

### Team
Represents a group of players participating in team-based competitions.

### Competition (Abstract)
Defines the interface for:
- running a competition
- scoring players
- selecting winners
- assigning awards

Subclasses provide the specific mechanics.

### Award (Abstract)
Awards modify player state (e.g., immunity, bonus score).

---

## Competition Types

### Immunity Competition
Players compete for an immunity award.

### Creativity Competition
Players are evaluated based on creativity scores.

### Team Competition
Teams compete; winner may grant awards to individual players.

---

## Voting System

Voting is handled by a separate module that:
- collects votes
- aggregates results
- determines outcomes

---

## Design Principles

- **Encapsulation**: Each subsystem operates independently.
- **Polymorphism**: Competitions and awards extend abstract base classes.
- **Extensibility**: New competitions, awards, and rules can be added with minimal changes.
- **Modularity**: Clean folder structure and separation of concerns.

---

## UML Diagrams

See `/docs/diagrams/` for class diagrams and early design.
