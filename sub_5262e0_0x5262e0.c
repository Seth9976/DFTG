// 函数名称: sub_5262e0
// 虚拟地址: 0x5262e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_5262e0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: char* esi = arg2
    char* esi = arg2
    char i
    
    do
        i = *esi
        esi = &esi[1]
    while (i != 0)
    int32_t var_c = *arg1
    void* esi_1 = esi - &esi[1]
    uint32_t result = _fwrite(arg2, 1, esi_1)
    
    if (result == esi_1)
        return result
    
    sub_489550(result, &data_5b2591, "resultCount == len", "d:\ax\trunk\ax2017\engine\xmlwriter.cpp", 
        0x29, "sXmlEmit")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
