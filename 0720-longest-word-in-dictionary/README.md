<h2><a href="https://leetcode.com/problems/longest-word-in-dictionary/">720. Longest Word in Dictionary</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of strings <code style="user-select: auto;">words</code> representing an English Dictionary, return <em style="user-select: auto;">the longest word in</em> <code style="user-select: auto;">words</code> <em style="user-select: auto;">that can be built one character at a time by other words in</em> <code style="user-select: auto;">words</code>.</p>

<p style="user-select: auto;">If there is more than one possible answer, return the longest word with the smallest lexicographical order. If there is no answer, return the empty string.</p>

<p style="user-select: auto;">Note that the word should be built from left to right with each additional character being added to the end of a previous word.&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["w","wo","wor","worl","world"]
<strong style="user-select: auto;">Output:</strong> "world"
<strong style="user-select: auto;">Explanation:</strong> The word "world" can be built one character at a time by "w", "wo", "wor", and "worl".
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> words = ["a","banana","app","appl","ap","apply","apple"]
<strong style="user-select: auto;">Output:</strong> "apple"
<strong style="user-select: auto;">Explanation:</strong> Both "apply" and "apple" can be built from other words in the dictionary. However, "apple" is lexicographically smaller than "apply".
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> consists of lowercase English letters.</li>
</ul>
</div>