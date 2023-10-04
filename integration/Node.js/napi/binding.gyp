{
  "targets": [
    { 
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ],
      'conditions': [
        ['OS=="mac"', {
          'xcode_settings': {
            'GCC_ENABLE_CPP_EXCEPTIONS': 'YES'
          }
        }]],
      "include_dirs" : [
        "<!@(node -p \"require('node-addon-api').include\")"
      ],
      "target_name": "uapki",
      "sources": [ "uapki.cc", "uapki-loader.cpp" ],
      'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ]
    }
  ]
}