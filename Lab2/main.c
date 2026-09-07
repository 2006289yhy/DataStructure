long long algorithm1(int n) {
    long long count = 0;

    for (int i = 0; i < n; i++) {
        count++;
    }

    return count;
    long long algorithm2(int n) {
        long long count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                count++;
            }
        }

        return count;
    }
    long long algorithm3(int n) {
        long long count = 0;

        for (int i = 1; i < n; i *= 2) {
            count++;
        }

        return count;
    }long long algorithm4(int n) {
        long long count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j *= 2) {
                count++;
            }
        }

        return count;
    }
