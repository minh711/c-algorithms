#include <stdio.h>

// Function prototype
void insertion_sort(int a[], int n);
void a_display(int a[], int n);

int main() {
    int a[] = {8, 4, 9, 5, 7, 6, 3, 2};
    insertion_sort(a, 8);
    a_display(a, 8);
}

//    Nguyên lý của Insertion Sort
//
//     Cho mảng:
//
//      6  5  3  1  8  7  2  4
//
//     So sánh
//
//      6  5  3  1  8  7  2  4
//      ^  ^
//
//     Dời [6] ra phía sau thế chỗ [5], chen [5] vào chỗ [6]
//
//      5  6  3  1  8  7  2  4
//      ^  *
//
//     So sánh [3] với các phần tử trước đó
//
//      5  6  3  1  8  7  2  4
//      *  *  ^
//
//     Dời [6] thế chỗ [3], dời [5] thế chỗ [6], sau đó chèn [3] vào chỗ [5]
//
//      3  5  6  1  8  7  2  4
//      ^  *  *
//
//     Tiếp tục...
//
//     Ví dụ chi tiết:
//
//     So sánh [7] với [8], lấy [7] làm key
//
//      1  3  5  6  8  7  2  4    key = 7
//                  *  ^
//
//     [7] < [8], cho [8] thế chỗ [7]
//
//      1  3  5  6  8  8  2  4    key = 7
//                  *  ^
//
//     So sánh [7] với [6]
//
//      1  3  5  6  8  7  2  4    key = 7
//               ^
//
//     [6] không lớn hơn [7], kết thúc vòng lặp, *insert* 7 vào
//
//      1  3  5  6  7  8  2  4
//                  ^
//

/**
 * @brief Insertion sort function.
 *
 * @param a Integer array.
 * @param n Length of the array.
 */
void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)    // Bắt đầu từ phần tử thứ 2
    {
        int key = a[i];    // Lưu giá trị phần tử hiện tại
        int j = i - 1;

        // Tiếp tục đi về phía trước cho tới khi hết chuỗi hoặc tới khi phần tử
        // j <= key
        //
        // <-- Trước -- | -- Sau -->
        while (j >= 0 && a[j] > key)
        {
            // Nếu phần tử j > key, dời phần tử j ra phía sau
            a[j + 1] = a[j];
            j = j - 1;
            // Tiếp tục dời index về phía trước, vòng lặp này sẽ dời tất cả các
            // phần tử > key ra phía trước, để sau đó *insert* key vào trong
        }

        // Sau khi kết thúc vòng lặp while, j đang bị - 1, nên phải + 1 lại mới
        // đúng index cần chèn key
        a[j + 1] = key;
    }
}

/**
 * @brief Display for an array.
 *
 * @param a Integer array.
 * @param n Length of the array.
 */
void a_display(int a[], int n)
{
    printf("%d", a[0]);
    for (int i = 1; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
}