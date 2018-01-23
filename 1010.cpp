// "1010" のような２進数文字列を整数値に変換
// '0' '1' 以外の文字は無視する
// オーバーフローチェックは行わない
unsigned int binToUInt(const char *ptr)
{
    unsigned int val = 0;
    while( *ptr != '\0' ) {
        switch( *ptr++ ) {
            case '0':
                val *= 2;
                break;
            case '1':
                val = val * 2 + 1;
                break;
        }
    }
    return val;
}
