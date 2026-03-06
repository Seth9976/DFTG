// 函数名称: sub_42a4a0
// 虚拟地址: 0x42a4a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_42a4a0(char* arg1)
{
    // 第一条实际指令: char* result = sub_4cfa30(arg1, U"@.")
    char* result = sub_4cfa30(arg1, U"@.")
    
    if (result != 0 && result != arg1)
        char* ecx_1 = sub_4cfa30(result, &data_5b3a68)
        
        if (ecx_1 != 0)
            do
                result.b = *ecx_1
                ecx_1 = &ecx_1[1]
            while (result.b != 0)
            
            if (ecx_1 - &ecx_1[1] u>= 3)
                result.b = 1
                return result
    
    result.b = 0
    return result
}
