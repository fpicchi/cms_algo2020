int guess(long long int val);
void answer(long long int risp);

void ricerca(long long int n) {
  long long int min = 1, max = n, mid;
  while (min < max) {
    mid = min + (max - min) / 2;
    int g = guess(mid);
    if (g == 0) {
      answer(mid);
    } else if (g < 0) {
      min = mid + 1;
    } else {
      max = mid - 1;
    }
  }
  answer(min);
}
