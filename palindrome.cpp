bool isPalindrome(Node* head) {
    vector<int> arr;

    Node* temp = head;

    while (temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    int i = 0, j = arr.size() - 1;

    while (i < j) {
        if (arr[i] != arr[j])
            return false;

        i++;
        j--;
    }

    return true;
}