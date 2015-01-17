QApplication app(argc, argv);

    //QString path2 = app.applicationDirPath()+"/resources";
    QString path2 = "C:\antoine\dev\cpp\QT\drumtrigg\drumtrigg\resources";
    MetronomeConf* conf = 0;

    if( MetronomeConf::isValidConfDir(path2) ) {
        conf = new MetronomeConf(path2);
    } else {
        printf("Application data does not exist! Exiting..\n");
        return -1;
    }

    QPushButton bouton("Salut les Zéros, la forme ?");
    bouton.show();

    return app.exec();
