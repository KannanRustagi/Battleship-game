# Battleship-game
I have created a 2 player battleship game in C++ that stores and updates the grid for both players, showing the
respective self and opponent grids to both players. This means that in the planning phase, player 1
should see only their grid and same for player 2. In the guessing phase of the game, Player 1 will see
their own grid, along with where the opponent has guessed, and whether that was a hit or a miss. The
second grid shown to player 1 during the guessing phase is the opponent’s grid with all the positions
blocked out, and wherever player 1 has guessed, marked with a * for a miss and H for a hit.<br><br>
The object of Battleship is to try and sink all the other player's before they sink all your ships. All the
other player's ships are somewhere on his/her board. You try and hit them by calling out the
coordinates of one of the squares on the board. The other player also tries to hit your ships by calling
out coordinates. Neither you nor the other player can see the other's board so you must try to guess
where they are. Each board in the physical game has two grids: the lower (horizontal) section for the
player's ships and the upper part (vertical during play) for recording the player's guesses.
