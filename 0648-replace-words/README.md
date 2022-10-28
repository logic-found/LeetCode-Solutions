<h2><a href="https://leetcode.com/problems/replace-words/">648. Replace Words</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">In English, we have a concept called <strong style="user-select: auto;">root</strong>, which can be followed by some other word to form another longer word - let's call this word <strong style="user-select: auto;">successor</strong>. For example, when the <strong style="user-select: auto;">root</strong> <code style="user-select: auto;">"an"</code> is followed by the <strong style="user-select: auto;">successor</strong> word <code style="user-select: auto;">"other"</code>, we can form a new word <code style="user-select: auto;">"another"</code>.</p>

<p style="user-select: auto;">Given a <code style="user-select: auto;">dictionary</code> consisting of many <strong style="user-select: auto;">roots</strong> and a <code style="user-select: auto;">sentence</code> consisting of words separated by spaces, replace all the <strong style="user-select: auto;">successors</strong> in the sentence with the <strong style="user-select: auto;">root</strong> forming it. If a <strong style="user-select: auto;">successor</strong> can be replaced by more than one <strong style="user-select: auto;">root</strong>, replace it with the <strong style="user-select: auto;">root</strong> that has <strong style="user-select: auto;">the shortest length</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <code style="user-select: auto;">sentence</code></em> after the replacement.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery"
<strong style="user-select: auto;">Output:</strong> "the cat was rat by the bat"
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> dictionary = ["a","b","c"], sentence = "aadsfasf absbs bbab cadsfafs"
<strong style="user-select: auto;">Output:</strong> "a a b c"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= dictionary.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= dictionary[i].length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">dictionary[i]</code> consists of only lower-case letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sentence.length &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">sentence</code> consists of only lower-case letters and spaces.</li>
	<li style="user-select: auto;">The number of words in <code style="user-select: auto;">sentence</code> is in the range <code style="user-select: auto;">[1, 1000]</code></li>
	<li style="user-select: auto;">The length of each word in <code style="user-select: auto;">sentence</code> is in the range <code style="user-select: auto;">[1, 1000]</code></li>
	<li style="user-select: auto;">Every two consecutive words in <code style="user-select: auto;">sentence</code> will be separated by exactly one space.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">sentence</code> does not have leading or trailing spaces.</li>
</ul>
</div>