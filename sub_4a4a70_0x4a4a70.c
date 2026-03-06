// 函数名称: sub_4a4a70
// 虚拟地址: 0x4a4a70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4a4a70(char* arg1, char* arg2)
{
    // 第一条实际指令: char* edi = arg2
    char* edi = arg2
    arg2.b = *arg1
    int32_t ebx
    ebx.b = *edi
    char var_8
    
    if (zx.d(ebx.b) + zx.d(arg2.b) u<= 0xff)
        ebx.b += arg2.b
        var_8 = ebx.b
    else
        var_8 = 0xff
    
    ebx.b = arg1[1]
    arg2.b = edi[1]
    
    if (zx.d(arg2.b) + zx.d(ebx.b) u<= 0xff)
        arg2.b += ebx.b
        char var_7_1 = arg2.b
    else
        char var_7 = 0xff
    
    arg2.b = edi[2]
    ebx.b = arg1[2]
    
    if (zx.d(arg2.b) + zx.d(ebx.b) u<= 0xff)
        arg2.b += ebx.b
        char var_6_1 = arg2.b
    else
        char var_6 = 0xff
    
    ebx.b = arg1[3]
    arg2.b = edi[3]
    
    if (zx.d(arg2.b) + zx.d(ebx.b) u> 0xff)
        char var_5 = 0xff
        return var_8.d
    
    arg2.b += ebx.b
    char var_5_1 = arg2.b
    return var_8.d
}
