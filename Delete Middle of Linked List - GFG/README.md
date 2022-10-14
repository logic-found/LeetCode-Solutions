# Delete Middle of Linked List
## Easy
<div class="problems_problem_content__Xm_eO" style="user-select: auto;"><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a singly linked list, delete <strong style="user-select: auto;">middle&nbsp;</strong>of the linked list. For example, if given linked list is 1-&gt;2-&gt;<strong style="user-select: auto;">3</strong>-&gt;4-&gt;5 then linked list should be modified to 1-&gt;2-&gt;4-&gt;5.<br style="user-select: auto;">
If there are <strong style="user-select: auto;">even</strong> nodes, then there would be <strong style="user-select: auto;">two middle </strong>nodes, we need to delete the second middle element. For example, if given linked list is 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6 then it should be modified to 1-&gt;2-&gt;3-&gt;5-&gt;6.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">If the input linked list is NULL or has 1 node, then it should return NULL</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList: 1-&gt;2-&gt;3-&gt;4-&gt;5
<strong style="user-select: auto;">Output: </strong>1 2 4 5</span>
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>LinkedList: 2-&gt;4-&gt;6-&gt;7-&gt;5-&gt;1
<strong style="user-select: auto;">Output: </strong>2 4 6 5 1</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
The task is to complete the function <strong style="user-select: auto;">deleteMid</strong>() which should delete the middle element from the linked list and&nbsp;return the head&nbsp;of the modified linked list.&nbsp;If the linked list is empty then it should return NULL.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 1000<br style="user-select: auto;">
1 &lt;= value &lt;= 1000</span></p>
</div>