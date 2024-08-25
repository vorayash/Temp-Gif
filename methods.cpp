/*
lli limit=90000000
65 - A
97 - a

The total number of subarrays in an array of size \(N\) is \(N*(N+1)/2\)
1. array
        array<int,6> a={1,2,3};

        at() :- This function is used to access the elements of array.
        get() :- get<index>(array_name) This function is also used to access the elements of array. This function is not the member of array class but overloaded function from class tuple.
        front(): returns first element of the array
        back(): returns last element of the array
        size(), max_size(): returns numbers of the elements in the array
        ar1.swap(ar2): swaps all the elements of the array1 with the array2
        empty(): returns true if array is empty
        fill(value): fills whole array with value


2.vector
        begin(): returns an iterator pointing to the first element
        ---------------------------------------------------
        for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

        end():Returns an iterator pointing to the theoretical element that follows the last element in the vector


        rbegin():Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
        rend(): reverse iterator of first element;
        cbegin():constant iterator to first element
        cend(): constant iterator to last element
        crend()
        crbegin()
        data(): returns pointer to first element address
        insert(position,value)----insert(position,how many times you want to insert,value)
        *max_element(vector.begin(),vector.end()) : returns maximum element from the vector

        vector<datatype> var(size,default value)

        //for vector<vector<dtype,dtype>> e;
        for(auto& e: paths)  cout<<e[0]<<cout<<e[1];

        //sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b){
            return a.second > b.second;
        });

3.deque
        deque <int> gquiz;
        gquiz.push_back(10);
        gquiz.push_front(20);
        same as vector


4.unordered map || map
        unordered_map<datatype> name;
        name.find(i):returns iterator to that index otherwise returns name.end()
        name.find(i)->first
        name.find(i)->second
        map<int, int> minitlist {
            {1, 10},
            {2, 20},
            {3, 30},
            {4, 40},
        };


        ordered map-- adding keys with frequency
        ----------------------------------------
        for(int i=0;i<nums.size();i++)
        {
            auto it=map.find(nums[i]);
            if(it!=map.end())       it->second++;

        else map.insert({nums[i],1});
        }
        --------------------------------------
       while(t--) map[a[i]]++;

        //iterate map in reverse
                for(auto it=map.rbegin();it!=map.rend();it++)
        //remove from map
        map.erase(iterator pointing to element)


5.string
        s[i] returns char from string

        to_string()

        string(size, char) - char to string

        string(rbegin(w), rend(w)): reverse string

        string.pop_back() - remove last character

        s.erase(s.begin()+i , s.end());
        // Deletes 4 characters from index number 1
                s.erase(1, 4);
        // Deletes all characters except first one
                str.erase(1);
        // Deletes all characters
                str.erase();
        // Deletes character at position 4
                str.erase(str.begin() + 4);
        // Deletes all characters between 0th index and str.end() - 6
                str.erase(str.begin() + 0, str.end() - 6);
        -------------------------------
        stringstream check1(example string);
        string intermediate;

        while(getline(check1, intermediate, ' ')&& k--)
                {
                ans+=intermediate+" ";
                }

        regex_replace(s,regex("(\\(\\))"),"o");
        regex_replace(command,regex("(al)"),"al");
        count(string.begin(),string.end(),char)

        //to get substring from string
                string s1="dog:cal";
                s1.substr(starting index of substring, length of substring)
                s1.substr(pos+1) -to get whole substr after pos
        //to find index of char in string
                s1="fo:dsf";
                s1.find(":") if char is not in string then it will return string::npos,
                                here npos is a static constant which is accessible by all
                                the string so i can write also s1.npos.
                if(s1.find(":")==string::npos) cout<<"not available";

        //to check if sorted
                is_sorted(starting address,ending address)

        //isalpha(char value) - returns true is character is alphabet
        //isdigit(char value) - returns true is character is digit


        ---<sstream.h>
        //to extract word from string
                stringstream iss(s);
                while(iss>>word) cout<<word;

        //to convert string number to int
                //using stringstream class
                        string str="sdsdf";
                        stringstream obj;
                        obj << str1; // insert data into obj
                        obj >> intdata; // fetch integer type data
                //Using the sscanf() function
                        const char *str1 = "555";
                        int numdata1;
                        sscanf (str1, "%d", &numdata1);
                //Using the stoi() function to convert string to int
                        stoi(str);  returns integer value
                //Using the atoi() function to convert character string to int
                        atoi (const char *str);  returns int value

        //to convert char number to int
                int(a)-48; because 48 is ascii value of 0

        //tolower(char) excepts char value and return lowercase
        //toupper(char) excepts char value and return uppercase


        //transform(Iterator inputBegin, Iterator inputEnd, Iterator OutputBegin, unary_operation)
                transform(arr, arr+n, arr, increment);
                transform(s.begin(),s.end(),s.begin(),::tolower);




6.set
                |     set             | unordered_set
---------------------------------------------------------
Ordering        | increasing  order   | no ordering
                | (by default)        |

Implementation  | Self balancing BST  | Hash Table
                | like Red-Black Tree |

search time     | log(n)              | O(1) -> Average
                |                     | O(n) -> Worst Case

Insertion time  | log(n) + Rebalance  | Same as search

Deletion time   | log(n) + Rebalance  | Same as search



        set<int> val = {6, 10, 5, 1};




        val.insert(value)  log(n)
        set<int, greater<int> > s1; : to store values in descending order

        auto firstElement = mySet.begin(); //First element of set
        cout << "First element: " << *firstElement << endl;

        set.count(value) //returns 1 if value present else returns zero-           O(logn)
        uordered_set.count(value) // returns 1 if value present else returns zero- O(1)
        multiset_count(value) //returns number of occurece of value -              O(K + log(N))

multiset
        multiset<int> st;
        st.erase(st.find(number)); - remove one occurence
        st.erase(number); - remove all occurence

7.upper_bound and lower_bound
        for sorted vector: lower_bound - O(logn) otherwise O(n)

        set<in> s;
        lower_bound(s.begin(),s.end(),ran()) - O(n)
        s.lower_bound(rand()) - O(logn);


8. Priority queue
        insertion() - log(n)
        //to store second number minimum, if second number is same than compare first number
        class Compare{
        public:
                bool operator()(pair<int, int> a, pair<int, int> b)
                {
                return a.second < b.second;
                }
        };
        sorted by higher to lower on second elem
        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>;


10. Multimap
        it allows multiple values with same key
        auto range = Multimap.equal_range(key_to_find) :  it returns a pair of iterators.
        range.first = The first member of the pair points to the beginning of the range
        range.second = second member points just past the end of the range.


11. struct
        struct TreeNode{
                int value;
                TreeNode* left;
                TreeNode* right;
                TreeNode(int val) : value(val), left(nullptr), right(nullptr){};
        };

12. tupple
        tuple <char, int, float> geek;
        geek = make_tuple('a', 10, 15.5);
        geek = {'a', 10, 15.5}
         get<0>(geek), get<1>(geek), get<2>(geek)
         auto[first, second, third] = geek;

Number of Good Pairs:
---------------------------------------
vector<int> A{1,2,3,1,1,3};
    int res = 0;
        unordered_map<int, int> count;
        for (int a: A) {
            res += count[a]++;

            cout<<a<<" "<<count[a]<<endl;
        }
        cout<< res;
    return 0;



-----------AND operator-------------
1 & AnyOddNumber = 1
0 & AnyEvenNumber = 0

-----------XOR operator-----------
a ^ 0 = a
a ^ a = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0
0 ^ 0 = 0


n & - n = find rightmost set bit

bitset<32>(num) - print decimal in binary representation


// negative reminder
-2 % 6 = -2
(-2 + 6) % 6 = 4





*/

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
        vector<int> num1;
        vector<int> num2;

        num1.push_back(3);

        num2.push_back(-2);
        num2.push_back(-1);
        num2.push_back(-5);
        cout << num2[2];
        return 0;
}

// getting non deacrising number without sorting

// for(int n=100; n>=1; n--){
// 	while(freq[n]-->0 && sumres<=sumleft){
// 		sumres+=n;
// 		sumleft-=n;
// 		res.push_back(n);
// 	}
// }

// algorithm

// Union find algorithm

int findParent(int node)
{
        return (parent[node] == node) ? node : parent[node] = findParent(parent[node]);
}

void makeSameGroup(int a, int b)
{
        int au = findParent(a);
        int bu = findParent(b);

        parent[au] = bu;
}

// Dutch National Flag algorithm, The Dutch National Flag algorithm, also known as 3-way partitioning, is an algorithm for sorting an array containing three distinct values.
https : // leetcode.com/problems/sort-colors/description/?envType=daily-question&envId=2024-07-03

        int mid = 0;
int low = 0;
int high = nums.size() - 1;

while (mid <= high)
{
        if (nums[mid] == 0)
                swap(nums[low++], nums[mid++]);
        else if (nums[mid] == 2)
                swap(nums[mid], nums[high--]);
        else
                mid++;
}

// Find lowest common ancestor in binary tree

TreeNode *lca(TreeNode *root, int s, int d)
{
        if (root == nullptr)
                return nullptr;

        if (root->val == s || root->val == d)
                return root;

        TreeNode *left = lca(root->left, s, d);
        TreeNode *right = lca(root->right, s, d);

        if (left && right)
                return root;

        return (left) ? left : right;
}

// Merge sort (nlogn)

void outPlaceMerge(vector<int> &nums, int low, int mid, int high)
{
        if (low >= high)
                return;
        int l = low, r = mid + 1, k = 0, size = high - low + 1;
        vector<int> sorted(size, 0);
        while (l <= mid and r <= high)
                sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
        while (l <= mid)
                sorted[k++] = nums[l++];
        while (r <= high)
                sorted[k++] = nums[r++];
        for (k = 0; k < size; k++)
                nums[k + low] = sorted[k];
}

void mergeSort(vector<int> &nums, int low, int high)
{
        if (low >= high)
                return;
        int mid = (high - low) / 2 + low;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        outPlaceMerge(nums, low, mid, high);
}

//  Dijkstra’s Algorithm

// Time Complexity	O((V + E) log V)
// Space Complexity	O(V)

// Floyd warshal algorithm 
// Time Complexity	O(n^2)
// Space Complexity	O(n^2)

        for (int i = 0; i < adj.size(); i++)
        {
                for (int j = 0; j < adj[0].size(); j++)
                {
                        if (i == j)
                                adj[i][j] = 0;
                }
        }

        for (int i = 0; i < edges.size(); i++)
        {
                adj[edges[i][0]][edges[i][1]] = edges[i][2];
                adj[edges[i][1]][edges[i][0]] = edges[i][2];
        }

        for (int k = 0; k < n; k++)
        {
                for (int i = 0; i < adj.size(); i++)
                {
                        for (int j = 0; j < adj[0].size(); j++)
                        {
                                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                        }
                }
        }

        //To find negative cycle
        for(int i = 0; i < n; i++)
        {
                if(adj[i][i] < 0) return true; // negative cycle exist 
        }


// GCD Greatest Common Divisor
        int GCD(int a, int b)
        {
                return (a == 0) ? abs(b) : GCD(b % a, a);
        }

//LCM Least Common Multiple
        int LCM(int a, int b)
        {
                return a * b / GCD(a, b);
        }


// Preorder Traversal
        while(root != nullptr || st.size() != 0)
        {
            if(root != nullptr)
            {
                st.push(root);
                ans.push_back(root->val);
                root = root->left;
            }
            else
            {
                root = st.top()->right;
                st.pop();
            }
        }

// Postorder Traversal
        while(root != nullptr || st.size() != 0)
        {
            if(root != nullptr)
            {
                st.push(root);
                ans.push_back(root->val);
                root = root->right;
            }
            else
            {
                root = st.top()->left;
                st.pop();
            }
        }

        reverse(ans.begin(), ans.end());

// Inorder Travarsal
        while(root != nullptr || st.empty() != true)
        {
            if(root != nullptr)
            {
                st.push(root);
                root = root->left;
            }
            else
            {
                ans.push_back(st.top()->val);
                root = st.top()->right;
                st.pop();
            }
        }



