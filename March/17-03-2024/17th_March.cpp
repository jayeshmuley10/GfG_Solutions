class Solution{
  public: 
    int countPairs(struct Node* head1, struct Node* head2, int x) { 
        std::unordered_set<int> set1; 
        struct Node* temp1 = head1; 
        while (temp1 != nullptr) { 
            set1.insert(temp1->data); 
            temp1 = temp1->next; 
        } 
        int count = 0; 
        struct Node* temp2 = head2; 
        while (temp2 != nullptr) { 
            if (set1.find(x - temp2->data) != set1.end()) { 
                count++; 
            } 
            temp2 = temp2->next; 
        } 
        return count; 
    } 
};
