// 函数名称: sub_539ba0
// 虚拟地址: 0x539ba0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_539ba0(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x38) == 0)
    if (*(arg1 + 0x38) == 0)
        *(arg1 + 0x38) = sub_4c2e40(0x24c000)
        *(arg1 + 0x40) = 0x1000
        *(arg1 + 0x50) = "dx11buffers"
        *(arg1 + 0x4c) = 0xd5a4
        return 0xd5a4
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "mpBlock == NULL", "d:\ax\trunk\ax2017\engine\dataarray.h", 0xce, 
        "DataArray<struct Dx11BufferData>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
