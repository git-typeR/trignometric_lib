#ifndef NOISE_GEN_H
#define NOISE_GEN_H

// 乱数については公開ライブラリをつかった方が信頼性は高い。
// 一から乱数生成関数を作るよりも良い。
// ここではrand関数を使った乱数生成関数を作る。
extern void rand_noise_create(int* pdata, int size, int range);


#endif //NOISE_GEN_H
