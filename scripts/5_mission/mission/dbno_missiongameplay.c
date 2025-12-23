modded class MissionGameplay
{
    protected ref DownedHudWidget m_BBD_DownedWidget;

    void MissionGameplay()
    {
        Print("[VignettesDownedButNotOut] MissionGameplay initialized.");
    }

    override void OnInit()
    {
        super.OnInit();
        
        if (!m_BBD_DownedWidget)
        {
             m_BBD_DownedWidget = new DownedHudWidget();
        }
    }

    override void OnUpdate(float timeslice)
    {
        super.OnUpdate(timeslice);

        if (m_BBD_DownedWidget)
        {
            PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
            
            if (player)
            {
                bool isDowned = player.BBD_IsDowned();
                m_BBD_DownedWidget.SetVisible(isDowned);
            }
            else
            {
                m_BBD_DownedWidget.SetVisible(false);
            }
        }
    }
}