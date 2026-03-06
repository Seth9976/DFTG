// 函数名称: sub_4e1990
// 虚拟地址: 0x4e1990
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4e1990(char* arg1, int32_t arg2)
{
    // 第一条实际指令: char* edi = arg1
    char* edi = arg1
    int32_t result = arg2
    char i = *edi
    
    while (i != 0)
        char eax_1 = _tolower(sx.d(i))
        char ecx = eax_1
        edi = &edi[1]
        
        if (eax_1 == 0x5c)
            ecx = 0x2f
        
        i = *edi
        result = result u>> 8 ^ *(((zx.d(ecx) ^ zx.d(result.b)) << 2) + &data_5d2c60)
    
    return result
}
