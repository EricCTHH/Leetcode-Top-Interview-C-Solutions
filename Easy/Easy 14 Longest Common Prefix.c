char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }
    if (strsSize == 1) {
        return strs[0];
    }

    char* prefix = (char*)malloc(201);
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        //when havent reach the end of prefix string and strs[i] string, and char on position j is equal for prefix and strs[i]
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }

        //cutoff prefix at the mismatch place
        prefix[j] = '\0';


        //if prefix empty
        if (j == 0) {
            return prefix;
        }
    }

    return prefix;
}