# Wildcard Pattern Matching
## Medium
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings&nbsp;'<strong style="user-select: auto;">str'</strong> and a wildcard pattern '<strong style="user-select: auto;">pattern' </strong>of length N and M respectively,&nbsp; You have to print '1' if the wildcard pattern is matched with str&nbsp;else print&nbsp;'0' .<br style="user-select: auto;">
<br style="user-select: auto;">
The wildcard pattern can include the characters ‘?’ and ‘*’<br style="user-select: auto;">
‘?’ – matches any single character<br style="user-select: auto;">
‘*’ – Matches any sequence of characters (including the empty sequence)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>The matching should cover the entire str&nbsp;(not partial str).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
pattern = "ba*a?"
str = "baaabab"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation: </strong>replace '*' with "aab" and 
'?' with 'b'. 
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
pattern = "a*ab"
str = "baaabab"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation</strong>: Because of'a' at first position,
pattern and str can't be matched. 
</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">wildCard()</strong>&nbsp;which takes the two strings 'pattern' and 'str' as input parameters&nbsp;and returns the answer.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity</strong>: O(N*M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space</strong>: O(N*M)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= length of(str,pat) &lt;= 200</span></p>
</div>