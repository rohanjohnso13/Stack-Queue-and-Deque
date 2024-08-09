
n = int(input())
for i in range(n):
    sentence = input()
    words = sentence.split()
    reverse_words = reversed(words)
    reverse_sentence = " ".join(reverse_words)
    print(reverse_sentence)
