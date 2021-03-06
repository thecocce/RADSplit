{$IFDEF FPC} // FreePascal Related Settings

  {$MODE DELPHI}
  {$MESSAGE FATAL 'FreePascal is not yet supported by the LaKraven Studios Standard Library [LKSL] (www.lakraven.com)'}

{$ELSE} // Delphi Related Settings

// Version Definitions

  {$IFDEF WIN32 || WIN64}
    {$DEFINE WINDOWS}
  {$ENDIF}

  {$DEFINE DELPHI}

  {$IFDEF VER80}
    {$DEFINE DELPHI1}
  {$ENDIF}
  
  {$IFDEF VER90}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
  {$ENDIF}
    
  {$IFDEF VER100}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
  {$ENDIF}
  
  {$IFDEF VER120}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
  {$ENDIF}
  
  {$IFDEF VER130}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
  {$ENDIF}
  
  {$IFDEF VER140}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
  {$ENDIF}
  
  {$IFDEF VER150}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
  {$ENDIF}
  
  {$IFDEF VER160}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
  {$ENDIF}
  
  {$IFDEF VER170}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
  {$ENDIF}
  
  {$IFDEF VER180}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
  {$ENDIF}  

  {$IFDEF VER185}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
  {$ENDIF}

  {$IFDEF VER190} // Borland Development Studio 2007 (HighLander) .NET Personality
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
  {$ENDIF}

  {$IFDEF VER200}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
  {$ENDIF}

  {$IFDEF VER210}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
  {$ENDIF}

  {$IFDEF VER220}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
    {$DEFINE DELPHIXE}
  {$ENDIF}

  {$IFDEF VER230}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
    {$DEFINE DELPHIXE}
    {$DEFINE DELPHIXE2}
  {$ENDIF}
  
  {$IFDEF VER240}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
    {$DEFINE DELPHIXE}
    {$DEFINE DELPHIXE2}
    {$DEFINE DELPHIXE3}
  {$ENDIF}
  
  {$IFDEF VER250}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
    {$DEFINE DELPHIXE}
    {$DEFINE DELPHIXE2}
    {$DEFINE DELPHIXE3}
    {$DEFINE DELPHIXE4}
  {$ENDIF}
  
  {$IFDEF VER260}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
    {$DEFINE DELPHIXE}
    {$DEFINE DELPHIXE2}
    {$DEFINE DELPHIXE3}
    {$DEFINE DELPHIXE4}
    {$DEFINE DELPHIXE5}
  {$ENDIF}
  
  {$IFDEF VER270}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
    {$DEFINE DELPHIXE}
    {$DEFINE DELPHIXE2}
    {$DEFINE DELPHIXE3}
    {$DEFINE DELPHIXE4}
    {$DEFINE DELPHIXE5}
    {$DEFINE DELPHIXE6}
  {$ENDIF}
  
  {$IFDEF VER280}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
    {$DEFINE DELPHIXE}
    {$DEFINE DELPHIXE2}
    {$DEFINE DELPHIXE3}
    {$DEFINE DELPHIXE4}
    {$DEFINE DELPHIXE5}
    {$DEFINE DELPHIXE6}
    {$DEFINE DELPHIXE7}
  {$ENDIF}

  {$IFDEF VER290}
    {$DEFINE DELPHI1}
    {$DEFINE DELPHI2}
    {$DEFINE DELPHI3}
    {$DEFINE DELPHI4}
    {$DEFINE DELPHI5}
    {$DEFINE DELPHI6}
    {$DEFINE DELPHI7}
    {$DEFINE DELPHI8}
    {$DEFINE DELPHI2005}
    {$DEFINE DELPHI2006}
    {$DEFINE DELPHI2007}
    {$DEFINE DELPHI2007_NET}
    {$DEFINE DELPHI2009}
    {$DEFINE DELPHI2010}
    {$DEFINE DELPHIXE}
    {$DEFINE DELPHIXE2}
    {$DEFINE DELPHIXE3}
    {$DEFINE DELPHIXE4}
    {$DEFINE DELPHIXE5}
    {$DEFINE DELPHIXE6}
    {$DEFINE DELPHIXE7}
    {$DEFINE DELPHIXE8}
  {$ENDIF}

// Support Definitions

  {$IFDEF DELPHI2005}
    {$IFNDEF DEBUG}
      {$DEFINE SUPPORTS_INLINE}
    {$ENDIF}
  {$ENDIF}

  {$IFDEF DELPHI2006}
    {$DEFINE SUPPORTS_ADVANCED_RECORDS}
  {$ENDIF}

  {$IFDEF DELPHI2009}
    {$DEFINE SUPPORTS_UNICODE}
    {$DEFINE SUPPORTS_GENERICS}
  {$ENDIF}
  
  {$IFDEF DELPHI2010}
    {$DEFINE SUPPORTS_ADVANCED_RTTI}
  {$ENDIF}
  
  {$IFDEF DELPHIXE2}
    {$DEFINE SUPPORTS_FIREMONKEY}
	{$DEFINE FM1}
    {$DEFINE SUPPORTS_IOS}
    {$DEFINE SUPPORTS_OSX}
    {$DEFINE SCOPED}
  {$ENDIF}

// MINIMUM SUPPORTED VERSION
  {$IFNDEF DELPHI2007}
    {$MESSAGE FATAL 'Your version of Delphi is older than Delphi 2007, and not supported by the LaKraven Studios Standard Library [LKSL] (www.lakraven.com)'}
  {$ELSE}
    {$DEFINE LKSL}
  {$ENDIF}
  
{$ENDIF}