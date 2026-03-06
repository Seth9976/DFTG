// 函数名称: sub_4dda70
// 虚拟地址: 0x4dda70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_4dda70(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 s>= 0 && arg2 s< *(arg1 + 4))
    if (arg2 s>= 0 && arg2 s< *(arg1 + 4))
        return (arg2 << 6) + *arg1
    
    sub_489550(arg2, &data_5b2591, "index >= 0 && index < mSize", "d:\ax\trunk\ax2017\engine\xarray.h", 
        0xb5, "XArray<struct Mat4>::operator []")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
