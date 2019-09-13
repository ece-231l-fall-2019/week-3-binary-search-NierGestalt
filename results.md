# Results

We started out with a vector of 1,000,000 integers and using a method of binary and linear search we found that 237 of those integers also existed within another file called search which contained 2,000 random numbers.

## Time Differences between these Methods

With these two methods we found that linear search resulted in a slower time to sort through all the numbers and compare them with the value we were looking for. On the other hand, binary search was vastly quicker in sorting and comparing our vector and value, because instead of going value by value we cut down the process by sorting them and comparing whether the middle number was more or less the value we looked for. This resulted in sorting the vector by halving it every time untill we reached our value.

### Table of linear and binary search optimization off

| linear   |  binary   |
| ------   | --------  |
|2.12063s |.0003128s  |
|1.52 s w/ pointers |.00036s w/pointers|

## Optimization on and pointers

We also ran the same program using optimization which made our program run faster by tweaking the way the computer does runs the programming like having certain things run in the background while it allocates memory for something else. Lastly, also seen in the table above we used pointers to the vector instead of references to the vector which seems to have impacted our results slightly, making the linear search run faster in every instance, but causing the binary search to run slower.

| linear   |  binary   |
| ------   | --------  |
|1.155s    |.0003546s  |
|.7387s w/ pointers |.00042s w/pointers|

## Conclusion

We find that binary search is obviously a more efficient search method. We also find that with optimization turned on linear search becomes way quicker, while even though binary search becomes slower I believe it was my fault as it seems opening a new chrome tab affected my results, this is hindsight. Binary otherwise would become quicker aswell but it's already so fast that it doesnt matter too much. pointers ont the other hand made the binary search slower which I can't explain.

