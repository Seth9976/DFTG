// 函数名称: sub_4f5710
// 虚拟地址: 0x4f5710
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4f5710(int32_t arg1)
{
    // 第一条实际指令: int32_t result_1 = arg1
    int32_t result_1 = arg1
    arg1.b = data_114e7d9
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx
    
    if (arg1.b != 0)
        var_8 = "DrawModeSet"
        var_c = 0xd
        var_10 = "d:\ax\trunk\ax2017\engine\drawmode.cpp"
    label_4f57d3:
        ecx = "!gDraw3DData.submittingRenderItems"
    label_4f57dd:
        sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    result = data_1150ee4
    
    if (result == result_1)
        return result
    
    if (result == 0)
        goto label_4f578f
    
    void* eax_1 = result - 1
    
    if (result != 1)
        result = eax_1 - 1
        
        if (eax_1 == 1)
            goto label_4f578f
        
        var_8 = "DrawModeSet"
        var_c = 0x1f
        var_10 = "d:\ax\trunk\ax2017\engine\drawmode.cpp"
        ecx = "Halt"
        goto label_4f57dd
    
    result = data_114e814
    
    if (*(result + 0x1d) == 0)
        var_8 = "SpriteDrawEnd"
        var_c = 0x25a
        var_10 = "d:\ax\trunk\ax2017\engine\sprite.cpp"
        ecx = "gpSpriteAppData->spritesDrawing"
        goto label_4f57dd
    
    *(result + 0x1d) = 0
    sub_4bed10()
    arg1.b = data_114e7d9
    label_4f578f:
    result = result_1
    
    if (result_1 == 0)
        data_1150ee4 = result_1
        return result
    
    void* eax_3 = result - 1
    
    if (result == 1)
        result = sub_4bfcc0()
        data_1150ee4 = result_1
        return result
    
    result = eax_3 - 1
    
    if (eax_3 != 1)
        var_8 = "DrawModeSet"
        var_c = 0x30
        var_10 = "d:\ax\trunk\ax2017\engine\drawmode.cpp"
        ecx = "Halt"
        goto label_4f57dd
    
    if (arg1.b == 0)
        data_1150ee4 = result_1
        return result
    
    var_8 = "Draw3DBegin"
    var_c = 0xb09
    var_10 = "d:\ax\trunk\ax2017\engine\draw3d.cpp"
    goto label_4f57d3
}
