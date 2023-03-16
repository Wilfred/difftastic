// From https://github.com/2dust/v2rayN under GPL-3.0 license
using DynamicData;
using DynamicData.Binding;
using MaterialDesignColors;
using MaterialDesignColors.ColorManipulation;
using MaterialDesignThemes.Wpf;
using ReactiveUI;
using ReactiveUI.Fody.Helpers;
using Splat;
using System.Drawing;
using System.IO;
using System.Reactive;
using System.Reactive.Linq;
using System.Text;
using System.Windows;
using System.Windows.Forms;
using System.Windows.Media;
using v2rayN.Base;
using v2rayN.Handler;
using v2rayN.Mode;
using v2rayN.Resx;
using v2rayN.Tool;
using v2rayN.Views;
using Application = System.Windows.Application;


namespace v2rayN.ViewModels
{
    public class MainWindowViewModel : ReactiveObject
    {
        #region private prop

        private CoreHandler _coreHandler;
        private StatisticsHandler _statistics;
        private List<ProfileItem> _lstProfile;
        private string _subId = string.Empty;
        private string _serverFilter = string.Empty;
        private static Config _config;
        private NoticeHandler? _noticeHandler;
        private readonly PaletteHelper _paletteHelper = new();
        private Dictionary<string, bool> _dicHeaderSort = new();
        private Action<string> _updateView;

        #endregion

        #region ObservableCollection

        private IObservableCollection<ProfileItemModel> _profileItems = new ObservableCollectionExtended<ProfileItemModel>();
        public IObservableCollection<ProfileItemModel> ProfileItems => _profileItems;

        private IObservableCollection<SubItem> _subItems = new ObservableCollectionExtended<SubItem>();
        public IObservableCollection<SubItem> SubItems => _subItems;

        private IObservableCollection<RoutingItem> _routingItems = new ObservableCollectionExtended<RoutingItem>();
        public IObservableCollection<RoutingItem> RoutingItems => _routingItems;

        private IObservableCollection<ComboItem> _servers = new ObservableCollectionExtended<ComboItem>();
        public IObservableCollection<ComboItem> Servers => _servers;

        [Reactive]
        public ProfileItemModel SelectedProfile { get; set; }
        public IList<ProfileItemModel> SelectedProfiles { get; set; }
        [Reactive]
        public SubItem SelectedSub { get; set; }
        [Reactive]
        public SubItem SelectedMoveToGroup { get; set; }
        [Reactive]
        public RoutingItem SelectedRouting { get; set; }
        [Reactive]
        public ComboItem SelectedServer { get; set; }
        [Reactive]
        public string ServerFilter { get; set; }
        [Reactive]
        public bool BlServers { get; set; }
        #endregion

        #region Menu

        //servers
        public ReactiveCommand<Unit, Unit> AddVmessServerCmd { get; }
        public ReactiveCommand<Unit, Unit> AddVlessServerCmd { get; }
        public ReactiveCommand<Unit, Unit> AddShadowsocksServerCmd { get; }
        public ReactiveCommand<Unit, Unit> AddSocksServerCmd { get; }
        public ReactiveCommand<Unit, Unit> AddTrojanServerCmd { get; }
        public ReactiveCommand<Unit, Unit> AddCustomServerCmd { get; }
        public ReactiveCommand<Unit, Unit> AddServerViaClipboardCmd { get; }
        public ReactiveCommand<Unit, Unit> AddServerViaScanCmd { get; }
        //servers delete
        public ReactiveCommand<Unit, Unit> EditServerCmd { get; }
        public ReactiveCommand<Unit, Unit> RemoveServerCmd { get; }
        public ReactiveCommand<Unit, Unit> RemoveDuplicateServerCmd { get; }
        public ReactiveCommand<Unit, Unit> CopyServerCmd { get; }
        public ReactiveCommand<Unit, Unit> SetDefaultServerCmd { get; }
        public ReactiveCommand<Unit, Unit> ShareServerCmd { get; }
        //servers move   
        public ReactiveCommand<Unit, Unit> MoveTopCmd { get; }
        public ReactiveCommand<Unit, Unit> MoveUpCmd { get; }
        public ReactiveCommand<Unit, Unit> MoveDownCmd { get; }
        public ReactiveCommand<Unit, Unit> MoveBottomCmd { get; }

        //servers ping 
        public ReactiveCommand<Unit, Unit> MixedTestServerCmd { get; }
        public ReactiveCommand<Unit, Unit> PingServerCmd { get; }
        public ReactiveCommand<Unit, Unit> TcpingServerCmd { get; }
        public ReactiveCommand<Unit, Unit> RealPingServerCmd { get; }
        public ReactiveCommand<Unit, Unit> SpeedServerCmd { get; }
        public ReactiveCommand<Unit, Unit> SortServerResultCmd { get; }
        //servers export
        public ReactiveCommand<Unit, Unit> Export2ClientConfigCmd { get; }
        public ReactiveCommand<Unit, Unit> Export2ServerConfigCmd { get; }
        public ReactiveCommand<Unit, Unit> Export2ShareUrlCmd { get; }
        public ReactiveCommand<Unit, Unit> Export2SubContentCmd { get; }

        //Subscription
        public ReactiveCommand<Unit, Unit> SubSettingCmd { get; }
        public ReactiveCommand<Unit, Unit> AddSubCmd { get; }
        public ReactiveCommand<Unit, Unit> SubUpdateCmd { get; }
        public ReactiveCommand<Unit, Unit> SubUpdateViaProxyCmd { get; }
        public ReactiveCommand<Unit, Unit> SubGroupUpdateCmd { get; }
        public ReactiveCommand<Unit, Unit> SubGroupUpdateViaProxyCmd { get; }

        //Setting
        public ReactiveCommand<Unit, Unit> OptionSettingCmd { get; }
        public ReactiveCommand<Unit, Unit> RoutingSettingCmd { get; }
        public ReactiveCommand<Unit, Unit> GlobalHotkeySettingCmd { get; }
        public ReactiveCommand<Unit, Unit> ClearServerStatisticsCmd { get; }
        public ReactiveCommand<Unit, Unit> ImportOldGuiConfigCmd { get; }

        //CheckUpdate
        public ReactiveCommand<Unit, Unit> CheckUpdateNCmd { get; }
        public ReactiveCommand<Unit, Unit> CheckUpdateV2flyCoreCmd { get; }
        public ReactiveCommand<Unit, Unit> CheckUpdateSagerNetCoreCmd { get; }
        public ReactiveCommand<Unit, Unit> CheckUpdateXrayCoreCmd { get; }
        public ReactiveCommand<Unit, Unit> CheckUpdateClashCoreCmd { get; }
        public ReactiveCommand<Unit, Unit> CheckUpdateClashMetaCoreCmd { get; }
        public ReactiveCommand<Unit, Unit> CheckUpdateGeoCmd { get; }



        public ReactiveCommand<Unit, Unit> ReloadCmd { get; }
        [Reactive]
        public bool BlReloadEnabled { get; set; }

        public ReactiveCommand<Unit, Unit> NotifyLeftClickCmd { get; }
        [Reactive]
        public Icon NotifyIcon { get; set; }
        [Reactive]
        public ImageSource AppIcon { get; set; }
        #endregion

        #region System Proxy 
        [Reactive]
        public bool BlSystemProxyClear { get; set; }
        [Reactive]
        public bool BlSystemProxySet { get; set; }
        [Reactive]
        public bool BlSystemProxyNothing { get; set; }
        [Reactive]
        public bool BlSystemProxyPac { get; set; }
        public ReactiveCommand<Unit, Unit> SystemProxyClearCmd { get; }
        public ReactiveCommand<Unit, Unit> SystemProxySetCmd { get; }
        public ReactiveCommand<Unit, Unit> SystemProxyNothingCmd { get; }
        public ReactiveCommand<Unit, Unit> SystemProxyPacCmd { get; }

        [Reactive]
        public bool BlRouting { get; set; }
        [Reactive]
        public int SystemProxySelected { get; set; }
        #endregion

        #region UI

        [Reactive]
        public string InboundDisplay { get; set; }
        [Reactive]
        public string InboundLanDisplay { get; set; }
        [Reactive]
        public string RunningServerDisplay { get; set; }
        [Reactive]
        public string RunningServerToolTipText { get; set; }
        [Reactive]
        public string RunningInfoDisplay { get; set; }
        [Reactive]
        public string SpeedProxyDisplay { get; set; }
        [Reactive]
        public string SpeedDirectDisplay { get; set; }
        [Reactive]
        public bool EnableTun { get; set; }

        [Reactive]
        public bool ColorModeDark { get; set; }
        private IObservableCollection<Swatch> _swatches = new ObservableCollectionExtended<Swatch>();
        public IObservableCollection<Swatch> Swatches => _swatches;
        [Reactive]
        public Swatch SelectedSwatch { get; set; }
        [Reactive]
        public int CurrentFontSize { get; set; }

        [Reactive]
        public string CurrentLanguage { get; set; }
        #endregion

        #region Init

        public MainWindowViewModel(ISnackbarMessageQueue snackbarMessageQueue, Action<string> updateView)
        {
            _updateView = updateView;
            ThreadPool.RegisterWaitForSingleObject(App.ProgramStarted, OnProgramStarted, null, -1, false);

            Locator.CurrentMutable.RegisterLazySingleton(() => new NoticeHandler(snackbarMessageQueue), typeof(NoticeHandler));
            _noticeHandler = Locator.Current.GetService<NoticeHandler>();
            _config = LazyConfig.Instance.GetConfig();
            //ThreadPool.RegisterWaitForSingleObject(App.ProgramStarted, OnProgramStarted, null, -1, false);
            Init();

            SelectedProfile = new();
            SelectedSub = new();
            SelectedMoveToGroup = new();
            SelectedRouting = new();
            SelectedServer = new();
            if (_config.tunModeItem.enableTun && Utils.IsAdministrator())
            {
                EnableTun = true;
            }
            _subId = _config.subIndexId;

            InitSubscriptionView();
            RefreshRoutingsMenu();
            RefreshServers();

            var canEditRemove = this.WhenAnyValue(
               x => x.SelectedProfile,
               selectedSource => selectedSource != null && !selectedSource.indexId.IsNullOrEmpty());

            this.WhenAnyValue(
                x => x.SelectedSub,
                y => y != null && !y.remarks.IsNullOrEmpty() && _subId != y.id)
                    .Subscribe(c => SubSelectedChanged(c));
            this.WhenAnyValue(
                 x => x.SelectedMoveToGroup,
                 y => y != null && !y.remarks.IsNullOrEmpty())
                     .Subscribe(c => MoveToGroup(c));

            this.WhenAnyValue(
                x => x.SelectedRouting,
                y => y != null && !y.remarks.IsNullOrEmpty())
                    .Subscribe(c => RoutingSelectedChanged(c));

            this.WhenAnyValue(
              x => x.SelectedServer,
              y => y != null && !y.Text.IsNullOrEmpty())
                  .Subscribe(c => ServerSelectedChanged(c));

            this.WhenAnyValue(
              x => x.ServerFilter,
              y => y != null && _serverFilter != y)
                  .Subscribe(c => ServerFilterChanged(c));

            SystemProxySelected = (int)_config.sysProxyType;
            this.WhenAnyValue(
              x => x.SystemProxySelected,
              y => y >= 0)
                  .Subscribe(c => DoSystemProxySelected(c));

            this.WhenAnyValue(
              x => x.EnableTun,
               y => y == true)
                  .Subscribe(c => DoEnableTun(c));

            BindingUI();
            RestoreUI();
            AutoHideStartup();

            //servers
            AddVmessServerCmd = ReactiveCommand.Create(() =>
            {
                EditServer(true, EConfigType.VMess);
            });
            AddVlessServerCmd = ReactiveCommand.Create(() =>
            {
                EditServer(true, EConfigType.VLESS);
            });
            AddShadowsocksServerCmd = ReactiveCommand.Create(() =>
            {
                EditServer(true, EConfigType.Shadowsocks);
            });
            AddSocksServerCmd = ReactiveCommand.Create(() =>
            {
                EditServer(true, EConfigType.Socks);
            });
            AddTrojanServerCmd = ReactiveCommand.Create(() =>
            {
                EditServer(true, EConfigType.Trojan);
            });
            AddCustomServerCmd = ReactiveCommand.Create(() =>
            {
                EditServer(true, EConfigType.Custom);
            });
            AddServerViaClipboardCmd = ReactiveCommand.Create(() =>
            {
                AddServerViaClipboard();
            });
            AddServerViaScanCmd = ReactiveCommand.CreateFromTask(() =>
            {
                return ScanScreenTaskAsync();
            });
            //servers delete
            EditServerCmd = ReactiveCommand.Create(() =>
            {
                EditServer(false, EConfigType.Custom);
            }, canEditRemove);
            RemoveServerCmd = ReactiveCommand.Create(() =>
            {
                RemoveServer();
            }, canEditRemove);
            RemoveDuplicateServerCmd = ReactiveCommand.Create(() =>
            {
                RemoveDuplicateServer();
            });
            CopyServerCmd = ReactiveCommand.Create(() =>
            {
                CopyServer();
            }, canEditRemove);
            SetDefaultServerCmd = ReactiveCommand.Create(() =>
            {
                SetDefaultServer();
            }, canEditRemove);
            ShareServerCmd = ReactiveCommand.Create(() =>
            {
                ShareServer();
            }, canEditRemove);
            //servers move   
            MoveTopCmd = ReactiveCommand.Create(() =>
            {
                MoveServer(EMove.Top);
            }, canEditRemove);
            MoveUpCmd = ReactiveCommand.Create(() =>
            {
                MoveServer(EMove.Up);
            }, canEditRemove);
            MoveDownCmd = ReactiveCommand.Create(() =>
            {
                MoveServer(EMove.Down);
            }, canEditRemove);
            MoveBottomCmd = ReactiveCommand.Create(() =>
            {
                MoveServer(EMove.Bottom);
            }, canEditRemove);

            //servers ping
            MixedTestServerCmd = ReactiveCommand.Create(() =>
            {
                ServerSpeedtest(ESpeedActionType.Mixedtest);
            });
            PingServerCmd = ReactiveCommand.Create(() =>
            {
                ServerSpeedtest(ESpeedActionType.Ping);
            }, canEditRemove);
            TcpingServerCmd = ReactiveCommand.Create(() =>
            {
                ServerSpeedtest(ESpeedActionType.Tcping);
            }, canEditRemove);
            RealPingServerCmd = ReactiveCommand.Create(() =>
            {
                ServerSpeedtest(ESpeedActionType.Realping);
            }, canEditRemove);
            SpeedServerCmd = ReactiveCommand.Create(() =>
            {
                ServerSpeedtest(ESpeedActionType.Speedtest);
            }, canEditRemove);
            SortServerResultCmd = ReactiveCommand.Create(() =>
            {
                SortServer(EServerColName.delayVal.ToString());
            });
            //servers export
            Export2ClientConfigCmd = ReactiveCommand.Create(() =>
            {
                Export2ClientConfig();
            }, canEditRemove);
            Export2ServerConfigCmd = ReactiveCommand.Create(() =>
            {
                Export2ServerConfig();
            }, canEditRemove);
            Export2ShareUrlCmd = ReactiveCommand.Create(() =>
            {
                Export2ShareUrl();
            }, canEditRemove);
            Export2SubContentCmd = ReactiveCommand.Create(() =>
            {
                Export2SubContent();
            }, canEditRemove);


            //Subscription
            SubSettingCmd = ReactiveCommand.Create(() =>
            {
                SubSetting();
            });
            AddSubCmd = ReactiveCommand.Create(() =>
            {
                AddSub();
            });
            SubUpdateCmd = ReactiveCommand.Create(() =>
            {
                UpdateSubscriptionProcess("", false);
            });
            SubUpdateViaProxyCmd = ReactiveCommand.Create(() =>
            {
                UpdateSubscriptionProcess("", true);
            });
            SubGroupUpdateCmd = ReactiveCommand.Create(() =>
            {
                UpdateSubscriptionProcess(_subId, false);
            });
            SubGroupUpdateViaProxyCmd = ReactiveCommand.Create(() =>
            {
                UpdateSubscriptionProcess(_subId, true);
            });

            //Setting
            OptionSettingCmd = ReactiveCommand.Create(() =>
            {
                OptionSetting();
            });
            RoutingSettingCmd = ReactiveCommand.Create(() =>
            {
                RoutingSetting();
            });
            GlobalHotkeySettingCmd = ReactiveCommand.Create(() =>
            {
                if ((new GlobalHotkeySettingWindow()).ShowDialog() == true)
                {
                    _noticeHandler?.Enqueue(ResUI.OperationSuccess);
                }
            });
            ClearServerStatisticsCmd = ReactiveCommand.Create(() =>
            {
                _statistics?.ClearAllServerStatistics();
                RefreshServers();
            });
            ImportOldGuiConfigCmd = ReactiveCommand.Create(() =>
            {
                ImportOldGuiConfig();
            });

            //CheckUpdate
            CheckUpdateNCmd = ReactiveCommand.Create(() =>
            {
                CheckUpdateN();
            });
            CheckUpdateV2flyCoreCmd = ReactiveCommand.Create(() =>
            {
                CheckUpdateCore(ECoreType.v2fly_v5);
            });
            CheckUpdateSagerNetCoreCmd = ReactiveCommand.Create(() =>
            {
                CheckUpdateCore(ECoreType.SagerNet);
            });
            CheckUpdateXrayCoreCmd = ReactiveCommand.Create(() =>
            {
                CheckUpdateCore(ECoreType.Xray);
            });
            CheckUpdateClashCoreCmd = ReactiveCommand.Create(() =>
            {
                CheckUpdateCore(ECoreType.clash);
            });
            CheckUpdateClashMetaCoreCmd = ReactiveCommand.Create(() =>
            {
                CheckUpdateCore(ECoreType.clash_meta);
            });
            CheckUpdateGeoCmd = ReactiveCommand.Create(() =>
            {
                CheckUpdateGeo();
            });

            ReloadCmd = ReactiveCommand.Create(() =>
            {
                Reload();
            });

            NotifyLeftClickCmd = ReactiveCommand.Create(() =>
            {
                ShowHideWindow(null);
            });

            //System proxy
            SystemProxyClearCmd = ReactiveCommand.Create(() =>
            {
                SetListenerType(ESysProxyType.ForcedClear);
            });
            SystemProxySetCmd = ReactiveCommand.Create(() =>
            {
                SetListenerType(ESysProxyType.ForcedChange);
            });
            SystemProxyNothingCmd = ReactiveCommand.Create(() =>
            {
                SetListenerType(ESysProxyType.Unchanged);
            });
            SystemProxyPacCmd = ReactiveCommand.Create(() =>
            {
                SetListenerType(ESysProxyType.Pac);
            });


            Global.ShowInTaskbar = true;
        }

        private void Init()
        {
            ConfigHandler.InitBuiltinRouting(ref _config);
            //MainFormHandler.Instance.BackupGuiNConfig(_config, true);
            _coreHandler = new CoreHandler(UpdateHandler);

            if (_config.guiItem.enableStatistics)
            {
                _statistics = new StatisticsHandler(_config, UpdateStatisticsHandler);
            }

            MainFormHandler.Instance.UpdateTask(_config, UpdateTaskHandler);
            MainFormHandler.Instance.RegisterGlobalHotkey(_config, OnHotkeyHandler, UpdateTaskHandler);

            Reload();
            ChangeSystemProxyStatus(_config.sysProxyType, true);
        }
        private void OnProgramStarted(object state, bool timeout)
        {
            Application.Current.Dispatcher.Invoke((Action)(() =>
            {
                ShowHideWindow(true);
            }));
        }

        #endregion

        #region Actions
        private void UpdateHandler(bool notify, string msg)
        {
            _noticeHandler?.SendMessage(msg);
        }
        private void UpdateTaskHandler(bool success, string msg)
        {
            _noticeHandler?.SendMessage(msg);
            if (success)
            {
                var indexIdOld = _config.indexId;
                RefreshServers();
                if (indexIdOld != _config.indexId)
                {
                    Reload();
                }
                if (_config.uiItem.enableAutoAdjustMainLvColWidth)
                {
                    _updateView("AdjustMainLvColWidth");
                }
            }
        }
        private void UpdateStatisticsHandler(ServerSpeedItem update)
        {
            try
            {
                Application.Current.Dispatcher.Invoke((Action)(() =>
                {
                    if (!Global.ShowInTaskbar)
                    {
                        return;
                    }
                    SpeedProxyDisplay = string.Format("{0}:{1}/s¡ü | {2}/s¡ý", Global.agentTag, Utils.HumanFy(update.proxyUp), Utils.HumanFy(update.proxyDown));
                    SpeedDirectDisplay = string.Format("{0}:{1}/s¡ü | {2}/s¡ý", Global.directTag, Utils.HumanFy(update.directUp), Utils.HumanFy(update.directDown));

                    if (update.proxyUp + update.proxyDown > 0)
                    {
                        var second = DateTime.Now.Second;
                        if (second % 3 == 0)
                        {
                            var item = _profileItems.Where(it => it.indexId == update.indexId).FirstOrDefault();
                            if (item != null)
                            {
                                item.todayDown = Utils.HumanFy(update.todayDown);
                                item.todayUp = Utils.HumanFy(update.todayUp);
                                item.totalDown = Utils.HumanFy(update.totalDown);
                                item.totalUp = Utils.HumanFy(update.totalUp);

                                if (SelectedProfile?.indexId == item.indexId)
                                {
                                    var temp = Utils.DeepCopy(item);
                                    _profileItems.Replace(item, temp);
                                    SelectedProfile = temp;
                                }
                                else
                                {
                                    _profileItems.Replace(item, Utils.DeepCopy(item));
                                }
                            }
                        }
                    }
                }));
            }
            catch (Exception ex)
            {
                Utils.SaveLog(ex.Message, ex);
            }
        }
