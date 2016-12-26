#include <cstdio>

const long long MOD = 1e9;

int main() {
  long long N, M;
  while (scanf("%lld%lld", &N, &M) == 2) {
    long long ans = 1;
    for (long long i = 0; i < M; i++) {
      ans = ans * (N - i);
      while (!(ans % 10)) {
        ans /= 10;
        //printf("%lld dhukse\n",ans);
      }
      ans %= MOD;
      printf("%lld\n",ans);
    }
    printf("%lld\n",ans);
    printf("%lld\n", ans % 10);
  }
  return 0;
}
