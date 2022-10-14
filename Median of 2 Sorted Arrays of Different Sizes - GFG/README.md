# Median of 2 Sorted Arrays of Different Sizes
## Hard
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two sorted arrays array1 and array2 of size <strong style="user-select: auto;">m</strong> and<strong style="user-select: auto;"> n</strong>&nbsp;respectively. Find the median of the two sorted arrays.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>m = 3, n = 4
array1[] = {1,5,9}
array2[] = {2,3,6,7}
<strong style="user-select: auto;">Output: </strong>5<strong style="user-select: auto;">
Explanation: </strong>The middle&nbsp;element for
{1,2,3,5,6,7,9} is 5</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>m = 2, n = 4
array1[] = {4,6}
array2[] = {1,2,3,5}
<strong style="user-select: auto;">Output: </strong>3.5</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">MedianOfArrays()</strong> that takes array1 and array2 as input and returns their median.&nbsp;<br style="user-select: auto;">
<br style="user-select: auto;">
Can you solve the problem in expected time complexity?</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(min(log n, log m)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O((n+m)/2).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:&nbsp;</strong><br style="user-select: auto;">
0 ≤ m,n ≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 ≤ array1[i], array2[i] ≤ 10<sup style="user-select: auto;">5</sup></span></p>
</div>