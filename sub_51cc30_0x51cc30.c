// 函数名称: sub_51cc30
// 虚拟地址: 0x51cc30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_51cc30(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x4240) == 0)
    if (*(arg1 + 0x4240) == 0)
        *(arg1 + 0x4240) = sub_4c2e40(0x14c000)
        *(arg1 + 0x4248) = 0x1000
        *(arg1 + 0x4258) = "glbuffers"
        *(arg1 + 0x4254) = 0xda8c
        *(arg1 + 0x5034) = 0
        return 0xda8c
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "mpBlock == NULL", "d:\ax\trunk\ax2017\engine\dataarray.h", 0xce, 
        "DataArray<struct OpenGLBufferData>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
