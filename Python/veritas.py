def solution(words, sentences):
    word_map = {}
    for word in words:
        tmp = tuple(sorted(word))
        word_map[tmp] = word_map.get(tmp, 0) + 1
    ans = [1] * len(sentences)
    for i in range(len(sentences)):
        for word in sentences[i].split():
            key = tuple(sorted(word))
            if key in word_map:
                ans[i] *= word_map[key]
    return ans

words = ["bats","tabs","in","cat","act"]
sentences = ["cat the bats", "in the act", "act tabs in"]
print(solution(words, sentences))