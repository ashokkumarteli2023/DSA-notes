A small doubt, what does this line mean?
cout << setw(0xf) << internal
Why internal?
Hey Amrutha, this "cout" statement means that we want to set a width of 15 (equal to 0xf in hexadecimals), and we want to adjust the field using the "internal" format flag. When you use "internal", it will pad the content from the "cout" statement to the right for non-numerical values. For numerical values, it's similar, but the numbers' sign (+ or -) will not be padded. So, in this HackerRank challenge, one of our responsibilities is to make sure that we're fixing the adjustment as needed (left, right or internal) to pass all the test cases. Also, I saw your other comment where you were asking about other format flags in C++ like "setiosflags". I think your comment got automatically removed by YouTube because the system thought you were injecting code in your comment, so I can't find your comment anymore. But you can write them again here and I'll make dedicated videos for each of them. :)