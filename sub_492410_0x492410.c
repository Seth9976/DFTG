// 函数名称: sub_492410
// 虚拟地址: 0x492410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_492410(int128_t* arg1)
{
    // 第一条实际指令: if (data_114e7d9 == 0)
    if (data_114e7d9 == 0)
        data_aca4c4 = *arg1
        data_aca4d4 = arg1[1]
        data_aca4e4 = arg1[2]
        data_aca4f4 = arg1[3]
        return 
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "!gDraw3DData.submittingRenderItems", 
        "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x364, "Draw3DSetView")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
