// 函数名称: sub_4bc6f0
// 虚拟地址: 0x4bc6f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int128_t* __thiscallsub_4bc6f0(int32_t* arg1, int128_t* arg2)
{
    // 第一条实际指令: int32_t eax = arg1[1]
    int32_t eax = arg1[1]
    
    if (eax s< arg1[2])
        int128_t* ecx_1 = *arg1 + eax * 0x18
        *ecx_1 = *arg2
        ecx_1[1].q = arg2[1].q
        arg1[1] += 1
        return arg2
    
    sub_489550(eax, &data_5b2591, "mSize < mSizeReserved", "d:\ax\trunk\ax2017\engine\xarray.h", 0x96, 
        "XArray<struct UI2StateEffect>::Append")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
