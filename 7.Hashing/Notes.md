###
 it is technique of storing data and retrives data in a way that allows for quick access to specific elements.

### instead of searching linearly it jumps directly to where the data should be



- ex: supporse we have a list of names and we want to search for a particular name
1. without hashing:
-  search nova:
- check each element one by one n comparisons


2. with hashing:
- check if the name is present in the list or not

- if it is present-> return the index
- if not-> return -1



### core idea:
- hashing converts: key -> into index using a hash function
- ex: key =37 -> hash function 37%10 = 7 store at table[7] 


### three components of hashing:
- 1. hash function: converts key into index
- 2. hash table: array of linked list
- 3. collision handling how to handle collision

### Diagram:
- key 45 -> hash function 45%10 =5 -> index 5 -> hashtable[5] 





### what is hashfunction:
- it is a function that maps a key to a value
- function that convert any value to small integer



### collision:
- when two different keys producing the same index(hash value)

- ex: 15%10=5 and 25%10=5

## why collision happens:
- because infinite keys limited indices




### how to handle collision:
- two major methods:
1. seperate chaining:  each index stores a linked list 
- ex: index 5 stores 45 and 55 
- searching : go to index -> traverse the linked list


2. open addressing: use linear probing
- ex: index 5 stores 45 
- searching: go to index -> if index is not empty-> go to next index until we find an empty index

h(x)

↓

If occupied

↓

h(x)+1

↓

+2

↓

+3



3. Quadratic probing: double the index and check again
- instead of +1 +2 +3 use reduces clustering(means it doesn't cluster too much)
- clustering means multiple keys are stored in same index
- ex: index 5 stores 45 and 55



4. Double hashing: use two hash functions
- ex: index 5 stores 45 and 55
- if collision occurs use second hash function
- 