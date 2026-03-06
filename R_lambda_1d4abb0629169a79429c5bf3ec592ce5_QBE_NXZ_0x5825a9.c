// 函数名称: ??R<lambda_1d4abb0629169a79429c5bf3ec592ce5>@@QBE_NXZ
// 虚拟地址: 0x5825a9
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcall??R<lambda_1d4abb0629169a79429c5bf3ec592ce5>@@QBE_NXZ(int32_t* arg1)
{
    // 第一条实际指令: sub_585c98(*arg1, *arg1[1])
    sub_585c98(*arg1, *arg1[1])
    *arg1[1] = 0
    int32_t* eax_3 = arg1[2]
    return __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<wchar_t> >::restore_state(
        *arg1, *eax_3, eax_3[1])
}
