// 函数名称: sub_48a080
// 虚拟地址: 0x48a080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_48a080(int32_t* arg1)
{
    // 第一条实际指令: char* result = *arg1
    char* result = *arg1
    int32_t var_8
    char const* const ecx
    
    if (result == 0 || *result == 0)
        char const* const var_4_1 = "XStringMagicDataStructFromCharPtr"
        var_8 = 0x1c
        ecx = "!str->IsEmpty()"
    else
        result = &result[0xfffffff0]
        
        if (*result == 0xfafafafa)
            return result
        
        char const* const var_4 = "XStringMagicDataStructFromCharPtr"
        var_8 = 0x20
        ecx = "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER"
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\xstring.cpp", var_8, 
        "XStringMagicDataStructFromCharPtr")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
