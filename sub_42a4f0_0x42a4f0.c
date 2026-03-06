// 函数名称: sub_42a4f0
// 虚拟地址: 0x42a4f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_42a4f0(char* arg1)
{
    // 第一条实际指令: char* edx = arg1
    char* edx = arg1
    int32_t result
    
    do
        result.b = *edx
        edx = &edx[1]
    while (result.b != 0)
    
    if (edx - &edx[1] == 8)
        char* esi_1 = nullptr
        
        while (_isalpha(*(esi_1 + arg1)) != 0 || _isdigit(*(esi_1 + arg1)) != 0)
            esi_1 = &esi_1[1]
            
            if (esi_1 s>= 8)
                result.b = 1
                return result
    
    result.b = 0
    return result
}
