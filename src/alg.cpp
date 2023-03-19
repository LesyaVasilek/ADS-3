// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int nov = 0;
    int last = size - 1;
    int count = 0;
    while (nov <= last) {
        int half = (nov + last) / 2;
        if (arr[half] == value) {
            count++;
            int i = half - 1;
            while (i >= nov && arr[i] == value) {
                count++;
                i--;
            }
            int c = half + 1;
            while (c <= last && arr[c] == value) {
                count++;
                c++;
            }
            return count;
        } else if (arr[half] < value) {
            nov = half + 1;
        } else {
            last = half - 1;
        }
    }
    return 0;
}
