# Pallanguzhi

A console implementation of **Pallanguzhi**, the traditional South Indian mancala-style sowing game, written in C. Two players take turns sowing counters around a 14-hole board, capturing counters as they go.

## The game

The board is 14 holes in a circle, starting with 5 counters in each. Player A owns holes 0–6, player B owns holes 7–13.

**On your turn** you pick one of your holes and lift all the counters out of it. You sow them one at a time into the following holes, moving around the board and wrapping from hole 13 back to hole 0.

**Capturing.** Any hole that reaches exactly 4 counters is captured immediately — those 4 counters go to the player who is sowing.

**Continuing.** When the last counter lands in a hole that already had counters, you pick that hole up and keep sowing. Your turn continues until the last counter lands in an empty hole.

**Ending a turn.** When the last counter lands in an empty hole, the turn ends and you capture the counters in the *next* hole along.

**Ending the game.** The game ends when a player has no counters left on their side of the board. Whoever has captured more counters wins.

## Files

| File | Purpose |
| --- | --- |
| `main.c` | The game — board state, sowing, capture rules and win condition |
| `ui.html` | A static board laid out in SVG, as a visual reference for the 14 holes |
| `pallanguzhi.css` | Styling for the board |

## Building and running

```bash
gcc main.c -o pallanguzhi
./pallanguzhi
```

The board is printed after each turn, and prompts tell you which range of holes to choose from.

## Status

This is an early project from when I was learning C. The core sowing and capture loop works, but some edge cases in the rules still need tightening — in particular the end-of-turn capture when play wraps around the end of the board, and validation of a few out-of-range inputs. The HTML board is a static mockup, not yet wired to the game.
