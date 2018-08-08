# Towers-of-Hanoi

  In this ancient puzzle game, you can see number and sequence of moving discs after entered the number of discs.
  
  ## Method

  I used recursion method in my project. A recursive function is a function that calls itself either directly or indirectly. 
Moving n discs can be viewed in terms of moving only n-1 discs as follows:
* 	n-1 discs moved from peg A to peg B, using peg C as a temporary holding area.
* 	The last discs (the largest )  moved from peg A to peg C
* 	n-1 discs moved from peg B to peg C, using peg A as a temporary holding area. <br/>

I used 3 types of funtions:

* 1.) <code> T( num,  peg,  aux,  end) </code>
* 2.) <code> T(num - 1, peg, end, aux) </code>
* 3.) <code> T(num - 1, aux, peg, end) </code><br/>

T=is a function <br/>
num=number of dics <br/>
peg=is the initial peg <br/>
aux=is the auxiliary peg <br/>
end=is the final peg <br/>  <br/>
<i> T(n) = T(n - 1) + T(1) + T(n - 1) = 2T(n - 1) + 1 .
