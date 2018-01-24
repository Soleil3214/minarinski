// "ab12" のような16進数文字列を整数値に変換
// '0'～'9', 'A'～'F', 'a'～'f' 以外の文字は無視する
// オーバーフローチェックは行わない
unsigned int hexToUInt(const char *ptr)
{
    unsigned int val = 0;
    unsigned int v;
    char ch;
    while( (ch = *ptr++) != '\0' ) {
        if( ch >= '0' && ch <= '9' )
            v = ch - '0';
        else if( ch >= 'A' && ch <= 'F' )
            v = ch - 'A' + 10;
        else if( ch >= 'a' && ch <= 'f' )
            v = ch - 'a' + 10;
        else
            continue;    // 16進数文字ではない場合
        val = val * 16 + v;
    }
    return val;
}
