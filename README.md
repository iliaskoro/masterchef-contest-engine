<h1>MasterChef Contest Engine – OOP Architecture & Dynamic Data Structures (C++)</h1>

A modular C++ object-oriented simulation engine inspired by MasterChef-style competitive shows.  
It models players, teams, multiple competition types, awards, and voting mechanics using clean OOP design and extensible architecture.

<h2>Features</h2>

<h3>Core Entities</h3>
- Player class
- Team class with scoring and state logic.
- Competition base class with extensible design.
- Award hierarchy enabling multiple award types.

<h3>Competition Types</h3>
- Immunity Competition
- Creativity Competition
- Team Competition
- (Easily extendable with new competition types)

<h3>Awards</h3>
- Immunity Award  
- Food Award  
- Excursion Award  

<h3>Voting System</h3>
- Standalone Voting module implementing rating & decision models.

<h2>Project Structure</h2>

```
masterchef-contest-engine/
│
├── src/
│   ├── core/
│   │   ├── Player.cpp/h
│   │   ├── Team.cpp/h
│   │   ├── Competition.h
│   │   ├── Award.h
│   │   ├── Round.h
│   │   └── main.cpp
│   │
│   ├── competitions/
│   │   ├── ImmunityCompetition.cpp/h
│   │   ├── CreativityCompetition.cpp/h
│   │   └── TeamCompetition.cpp/h
│   │
│   │
│   ├── awards/
│   │   ├── ImmunityAward.h
│   │   ├── FoodAward.h
│   │   └── ExcursionAward.h
│   │
│   └── voting/
│       ├── Voting.cpp/h
│       └── Vote.h
│
├── docs/
│   ├── diagrams/
│   └── architecture.md
│
├── CMakeLists.txt
├── .gitignore
└── README.md
```

<h2>Build Instructions (CMake)</h2>

```
mkdir build
cd build
cmake ..
cmake --build .
./masterchef
```

---

<h2>UML & Architecture</h2>
See "docs/architecture.md" and "docs/diagrams/".

---

<h2>Extending the Engine</h2>
<h3>To add a new Competition:</h3>
1. Derive from `Competition`
2. Override scoring logic
3. Integrate award callbacks

<h3>To add a new Award:</h3>
1. Derive from `Award`
2. Implement `apply(Player&)`

---

License
MIT License.

