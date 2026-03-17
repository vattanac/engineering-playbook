# RKE2 Deep Dive Guide

A comprehensive, beginner-friendly guide to **Rancher Kubernetes Engine 2 (RKE2)** — from zero knowledge to production-ready, with interactive diagrams and hands-on examples.

## Overview

This guide covers everything you need to understand and operate RKE2, the security-first Kubernetes distribution by SUSE/Rancher. It is designed for DevOps engineers, system administrators, and anyone new to RKE2 who wants a clear, step-by-step learning path.

## Topics Covered

1. **What Problems RKE2 Solves** — container orchestration, security, and operational simplicity
2. **What Is RKE2** — identity, features, and what ships out of the box
3. **Architecture** — server nodes, agent nodes, and how they connect
4. **Core Components** — kube-apiserver, etcd, scheduler, controller-manager, kubelet, kube-proxy, containerd, Canal CNI, NGINX Ingress, CoreDNS, Metrics Server, Helm Controller
5. **RKE2 vs K3s vs RKE1** — side-by-side comparison table
6. **Single-Node Installation** — step-by-step from download to verification
7. **Adding Worker Nodes** — agent installation and joining
8. **High-Availability Setup** — 3-server cluster with load balancer
9. **Networking Deep Dive** — Canal, Calico, Cilium, Multus, and VXLAN internals
10. **Security & CIS Hardening** — automatic protections and manual hardening steps
11. **Configuration Reference** — full `config.yaml` with explanations and file system layout
12. **Day-2 Operations** — upgrades, etcd backups, monitoring
13. **Troubleshooting Cheat Sheet** — common problems with diagnostic commands and fixes
14. **End-to-End App Deployment** — Deployment, Service, and Ingress walkthrough
15. **Next Steps** — recommended tools and resources

## Features

- Dark theme UI with glassmorphism and ambient background effects
- Animated SVG architecture diagrams with live data flow visualization
- Copy-to-clipboard buttons on all code blocks
- Scroll-triggered fade-in animations
- Responsive design for mobile and desktop
- Sticky navigation bar
- Bento grid component layouts
- Color-coded callout boxes (info, warning, success, danger)

## Tech Stack

- Pure HTML, CSS, and vanilla JavaScript (no build tools or frameworks)
- SVG animations (no external libraries)
- Google Fonts: Inter + JetBrains Mono

## Usage

Open `rke2-deep-dive-guide.html` in any modern browser. No server or build step required.

## Author

**Sim Vattanac**
Contact: [vattanacsim99@gmail.com](mailto:vattanacsim99@gmail.com)

## License

Copyright (c) 2026 Sim Vattanac. All rights reserved.
